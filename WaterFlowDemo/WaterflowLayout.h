//
//  WaterflowLayout.h
//  WaterFlowDemo
//
//  Created by yyj on 16/2/1.
//  Copyright © 2016年 yyj. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WaterflowLayout;

@protocol WaterflowLayoutDelegate <NSObject>
@required
- (CGFloat)waterflowLayout:(WaterflowLayout *)waterflowLayout heightForItemAtIndex:(NSUInteger)index itemWidth:(CGFloat)itemWidth;

@optional
- (CGFloat)columnCountInWaterflowLayout:(WaterflowLayout *)waterflowLayout;
- (CGFloat)columnMarginInWaterflowLayout:(WaterflowLayout *)waterflowLayout;
- (CGFloat)rowMarginInWaterflowLayout:(WaterflowLayout *)waterflowLayout;
- (UIEdgeInsets)edgeInsetsInWaterflowLayout:(WaterflowLayout *)waterflowLayout;
@end

@interface WaterflowLayout : UICollectionViewLayout
/** 代理 */
@property (nonatomic, weak) id<WaterflowLayoutDelegate> delegate;
@end
