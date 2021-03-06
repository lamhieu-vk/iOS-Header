//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSBundleController.h>

@class CTXPCServiceSubscriptionContext, NSArray, NSOrderedSet, PSListController, TPSTelephonyController;

@interface TPSBundleController : PSBundleController
{
    _Bool _supportsDisabledSubscriptions;
    TPSTelephonyController *_telephonyController;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    NSArray *_specifiers;
}

@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
@property(readonly, nonatomic) _Bool supportsDisabledSubscriptions; // @synthesize supportsDisabledSubscriptions=_supportsDisabledSubscriptions;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
@property(readonly, nonatomic) TPSTelephonyController *telephonyController; // @synthesize telephonyController=_telephonyController;
- (void).cxx_destruct;
- (void)telephonyController:(id)arg1 didChangeSubscriptions:(id)arg2;
- (void)telephonyController:(id)arg1 didChangeActiveSubscriptions:(id)arg2;
- (id)subscriptionContextForSpecifier:(id)arg1;
- (id)specifiersWithSpecifier:(id)arg1;
@property(readonly, copy, nonatomic) NSOrderedSet *supportedSubscriptions;
@property(readonly, copy, nonatomic) NSOrderedSet *subscriptions;
@property(readonly, nonatomic) __weak PSListController *parentListController;
@property(readonly, nonatomic, getter=isSubscriptionListHidden) _Bool subscriptionListHidden;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (id)initWithParentListController:(id)arg1;

@end

