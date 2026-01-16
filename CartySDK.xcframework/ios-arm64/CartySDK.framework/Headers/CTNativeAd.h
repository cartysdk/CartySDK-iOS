//
//  CTNativeAd.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CTNativeAdDelegate;

@interface CTNativeAd : NSObject

- (void)loadAd;
- (BOOL)isReady;
- (void)registerContainer:(UIView *)containerView
       withClickableViews:(NSArray<UIView *> *_Nullable)clickableViews;

@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,copy)NSString *placementid;
@property (nonatomic,weak)UIViewController *rootViewController;
@property (nonatomic,weak)id <CTNativeAdDelegate> delegate;

@property (nonatomic,readonly)BOOL isLoading;
@property (nonatomic,readonly)BOOL isVideo;
@property (nonatomic,readonly)NSString *_Nullable title;
@property (nonatomic,readonly)NSString *_Nullable desc;
@property (nonatomic,readonly)NSString *_Nullable ctaText;
@property (nonatomic,readonly)NSString *_Nullable iconImageURL;
@property (nonatomic,readonly)CGFloat iconHeight;
@property (nonatomic,readonly)CGFloat iconWidth;
@property (nonatomic,readonly)UIView *_Nullable adChoiceView;
@property (nonatomic,readonly)UIView *_Nullable mediaView;
@property (nonatomic,readonly)NSString *_Nullable sponsored;
@property (nonatomic,readonly)NSString *_Nullable rating;
@property (nonatomic,readonly)NSString *_Nullable likes;
@end

@protocol CTNativeAdDelegate <NSObject>

- (void)CTNativeAdDidLoad:(CTNativeAd *)ad;
- (void)CTNativeAdLoadFail:(CTNativeAd *)ad withError:(NSError *)error;
- (void)CTNativeAdDidShow:(CTNativeAd *)ad;
- (void)CTNativeAdShowFail:(CTNativeAd *)ad withError:(NSError *)error;
- (void)CTNativeAdDidClick:(CTNativeAd *)ad;
@end

NS_ASSUME_NONNULL_END


