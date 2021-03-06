//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMServiceClientInterface-Protocol.h>
#import <AXMediaUtilities/AXMServiceInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXMService : NSObject <AXMServiceClientInterface, AXMServiceInterface>
{
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    NSXPCConnection *_xpcConnection;
}

@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)visionEngine:(id)arg1 evaluateSource:(id)arg2 context:(id)arg3 options:(long long)arg4 result:(CDUnknownBlockType)arg5;
- (void)prewarmVisionEngineService;
- (id)_serviceProxy;
- (void)dealloc;
- (void)_destroyXPCConnection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

