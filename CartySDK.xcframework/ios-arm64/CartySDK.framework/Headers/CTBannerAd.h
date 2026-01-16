//
//  CTBannerAd.h
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CTBannerAdDelegate;

typedef enum : NSUInteger {
    CTBannerSizeType320x50,
    CTBannerSizeType320x100,
    CTBannerSizeType300x250
} CTBannerSizeType;

typedef enum : NSUInteger {
    CTBannerContentModeScaleToFill,
    CTBannerContentModeCenter
} CTBannerContentMode;

@interface CTBannerAd : UIView

- (void)loadAd;

@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,copy)NSString *placementid;
@property (nonatomic,weak)UIViewController *rootViewController;
@property (nonatomic,weak)id <CTBannerAdDelegate> delegate;
@property (nonatomic,readonly)BOOL isLoading;
@property (nonatomic,assign)CTBannerSizeType bannerSize;
@property (nonatomic,assign)CTBannerContentMode contentMode;
@end


@protocol CTBannerAdDelegate <NSObject>

- (void)CTBannerAdDidLoad:(CTBannerAd *)ad;
- (void)CTBannerAdLoadFail:(CTBannerAd *)ad withError:(NSError *)error;
- (void)CTBannerAdDidShow:(CTBannerAd *)ad;
- (void)CTBannerAdShowFail:(CTBannerAd *)ad withError:(NSError *)error;
- (void)CTBannerAdDidClick:(CTBannerAd *)ad;
- (void)CTBannerAdDidClose:(CTBannerAd *)ad;
@end

NS_ASSUME_NONNULL_END
