//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AsyncTask.h"

#import "AMSURLProtocolDelegate-Protocol.h"

@class NSArray, NSString, NSURL, StoreKitClient;

@interface RestoreInAppTransactionsTask : AsyncTask <AMSURLProtocolDelegate>
{
    StoreKitClient *_client;
    _Bool _forceAuthentication;
    NSString *_applicationUsername;
    NSURL *_receiptInstallURL;
    NSArray *_transactions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
@property(retain, nonatomic) NSURL *receiptInstallURL; // @synthesize receiptInstallURL=_receiptInstallURL;
@property(nonatomic) _Bool forceAuthentication; // @synthesize forceAuthentication=_forceAuthentication;
@property(copy, nonatomic) NSString *applicationUsername; // @synthesize applicationUsername=_applicationUsername;
- (void)main;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

