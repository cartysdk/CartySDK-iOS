//
//  CTInteractiveAd.h
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CTInteractiveAdDelegate;

@interface CTInteractiveAd : NSObject

- (void)openAd:(UIViewController *)rootViewController;

@property (nonatomic,copy)NSString *placementid;
@property (nonatomic,weak)id <CTInteractiveAdDelegate> delegate;
@end

@protocol CTInteractiveAdDelegate <NSObject>

- (void)CTInteractiveAdDidOpen:(CTInteractiveAd *)ad;
- (void)CTInteractiveAdOpenFail:(CTInteractiveAd *)ad withError:(NSError *)error;
- (void)CTInteractiveAdDidDismiss:(CTInteractiveAd *)ad;
@end

NS_ASSUME_NONNULL_END
