//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/RMUnresolvedAsset-Protocol.h>

@class NSString, RMAsset;

@interface RMUnresolvedDataAsset : NSObject <RMUnresolvedAsset>
{
    RMAsset *_asset;
}

@property(retain, nonatomic) RMAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)resolveWithAssetResolver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithAsset:(id)arg1;

@end

