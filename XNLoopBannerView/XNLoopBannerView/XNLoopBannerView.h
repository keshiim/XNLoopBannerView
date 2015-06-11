//
//  XNLoopBannerView.h
//  XNLoopBannerView
//
//  Created by XuNing on 15/6/10.
//  Copyright (c) 2015年 XuNing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SMPageControl.h>

@class XNLoopBannerView;
@protocol XNLoopBannerViewDelegate <NSObject>
@optional
- (void)bannerView:(XNLoopBannerView *)bannerView didSelectAtIndex:(NSInteger)index;

@end

@interface XNLoopBannerView : UIView

@property(nonatomic, weak) id<XNLoopBannerViewDelegate> bannerDelegate;
@property(nonatomic, strong, readonly) SMPageControl *pageControl;
@property(nonatomic) NSInteger currentPage; //default is 0.
@property(nonatomic) BOOL autoScroll; //default is YES.
@property(nonatomic) NSTimeInterval animationDuration; //default is 3s.

/**
 *   Don't use "pageControl.frame = " to change frame of pageControl. Default is CGRectMake(0, self.frame.size.height - 22, self.frame.size.width, 22)
 */
@property(nonatomic) CGRect pageControlFrame;

- (instancetype)initWithFrame:(CGRect)frame imageUrls:(NSArray *)urlStrings;

- (void)setCurrentPage:(NSInteger)currentPage animated:(BOOL)animated;

@end