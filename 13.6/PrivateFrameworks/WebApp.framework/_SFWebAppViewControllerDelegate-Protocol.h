//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebApp/NSObject-Protocol.h>

@class NSError, _SFWebAppViewController;

@protocol _SFWebAppViewControllerDelegate <NSObject>
- (void)webAppViewController:(_SFWebAppViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)webAppViewControllerDidFinishInitialLoad:(_SFWebAppViewController *)arg1;
- (void)webAppViewController:(_SFWebAppViewController *)arg1 didChangeLoadingState:(_Bool)arg2;
@end

