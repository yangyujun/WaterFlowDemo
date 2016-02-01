//
//  ShopCell.m
//  WaterFlowDemo
//
//  Created by yyj on 16/2/1.
//  Copyright © 2016年 yyj. All rights reserved.
//

#import "ShopCell.h"

#import "ShopModel.h"
#import "UIImageView+WebCache.h"

@interface ShopCell()
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;
@end

@implementation ShopCell

- (void)setShop:(ShopModel *)shop
{
    _shop = shop;
    
    // 1.图片
    [self.imageView sd_setImageWithURL:[NSURL URLWithString:shop.img] placeholderImage:[UIImage imageNamed:@"loading"]];
    
    // 2.价格
    self.priceLabel.text = shop.price;
}
@end
