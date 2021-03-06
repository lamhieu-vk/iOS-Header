//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PLAssetsdCloudClient;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLPreheatItem : NSObject
{
    unsigned short _format;
    long long _imageType;
    struct CGSize _optimalSourcePixelSize;
    NSString *_assetUUID;
    _Bool _CPLPrefetching;
    NSObject<OS_dispatch_queue> *_CPLPrefetchingIsolationQueue;
    NSString *_CPLPrefetchingDoneToken;
    int _CPLNotifyRegistrationToken;
    _Bool _CPLPrefetchingCancelled;
    NSObject<OS_dispatch_group> *_CPLPrefetchingWaitGroup;
    _Bool _cachingAllowed;
    _Atomic int _requestCount;
    PLAssetsdCloudClient *_cloudClient;
    _Bool _didCompleteCPLPrefetchingWithSuccessOrError;
    _Bool _CPLPrefetchingWasCancelled;
    unsigned short _bestFormat;
    NSString *_virtualCPLTaskIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cachingAllowed; // @synthesize cachingAllowed=_cachingAllowed;
@property _Bool CPLPrefetchingWasCancelled; // @synthesize CPLPrefetchingWasCancelled=_CPLPrefetchingWasCancelled;
@property _Bool didCompleteCPLPrefetchingWithSuccessOrError; // @synthesize didCompleteCPLPrefetchingWithSuccessOrError=_didCompleteCPLPrefetchingWithSuccessOrError;
@property(retain) NSString *virtualCPLTaskIdentifier; // @synthesize virtualCPLTaskIdentifier=_virtualCPLTaskIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *CPLPrefetchingWaitGroup; // @synthesize CPLPrefetchingWaitGroup=_CPLPrefetchingWaitGroup;
@property(readonly, nonatomic) _Bool CPLPrefetching; // @synthesize CPLPrefetching=_CPLPrefetching;
@property(readonly, copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
@property(readonly, nonatomic) struct CGSize optimalSourcePixelSize; // @synthesize optimalSourcePixelSize=_optimalSourcePixelSize;
@property(readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) unsigned short bestFormat; // @synthesize bestFormat=_bestFormat;
@property(readonly, nonatomic) unsigned short format; // @synthesize format=_format;
- (_Bool)isRetained;
- (long long)decrementRequestCount;
- (long long)incrementRequestCount;
- (_Bool)isCancelled;
- (void)cancelPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)addImageHandler:(CDUnknownBlockType)arg1;
- (id)cachedImageIfAvailable:(_Bool *)arg1;
- (id)cachedImage:(_Bool *)arg1;
- (id)description;
- (id)initForCPLPrefetchingWithAssetUUID:(id)arg1 format:(unsigned short)arg2 assetsdClient:(id)arg3;

@end

