//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEAgentTunnelExtension.h>

#import <NetworkExtension/NEExtensionAppProxyProviderHostDelegate-Protocol.h>
#import <NetworkExtension/NEFlowDivertPluginDriver-Protocol.h>

@class NSString;

@interface NEAgentAppProxyExtension : NEAgentTunnelExtension <NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver>
{
}

- (void)extension:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setDelegateInterface:(unsigned int)arg1;
- (void)connectWithParameters:(id)arg1;
- (int)requiredEntitlement;
- (id)driverInterface;
- (id)managerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

