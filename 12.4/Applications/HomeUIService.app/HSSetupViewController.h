//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "HMSetupRemoteService-Protocol.h"
#import "HSSetupCoordinatorDelegate-Protocol.h"

@class HFAccessoryBrowsingManager, HSEntitlementContext, HSSetupCoordinator, NSString;

@interface HSSetupViewController : UINavigationController <HSSetupCoordinatorDelegate, HMSetupRemoteService>
{
    _Bool _didNotifyFinishLoading;
    _Bool _didNotifyFinishPairing;
    HSEntitlementContext *_entitlementContext;
    HSSetupCoordinator *_setupCoordinator;
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(retain, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
@property(retain, nonatomic) HSSetupCoordinator *setupCoordinator; // @synthesize setupCoordinator=_setupCoordinator;
@property(nonatomic) _Bool didNotifyFinishPairing; // @synthesize didNotifyFinishPairing=_didNotifyFinishPairing;
@property(nonatomic) _Bool didNotifyFinishLoading; // @synthesize didNotifyFinishLoading=_didNotifyFinishLoading;
@property(retain, nonatomic) HSEntitlementContext *entitlementContext; // @synthesize entitlementContext=_entitlementContext;
- (void).cxx_destruct;
- (void)_notifyPairingEndedIfNecessary;
- (CDStruct_3999e4e2)_configurationProgressForSetupState:(long long)arg1;
- (id)_createSetupServiceViewControllerForHomeKitObject:(id)arg1 inHome:(id)arg2 configurationProgress:(CDStruct_3999e4e2)arg3;
- (id)_setupAccessoryPairingViewControllerFromState:(long long)arg1;
- (id)_createPairingViewControllerForAccessoryDescription:(id)arg1;
- (void)setupCoordinatorDidFinishWithInfo:(id)arg1 error:(id)arg2;
- (void)setupCoordinatorDidChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)setupCoordinatorDidBecomeReady;
- (void)setupInterruptedWithError:(id)arg1;
- (void)setupFailedWithError:(id)arg1;
- (void)setHomeUUID:(id)arg1 accessoryDescription:(id)arg2;
- (void)_hostApplicationWillEnterForeground;
- (void)_hostApplicationDidEnterBackground;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

