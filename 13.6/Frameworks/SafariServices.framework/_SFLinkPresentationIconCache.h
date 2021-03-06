//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/WBSSiteMetadataProvider-Protocol.h>

@class NSString, WBSSiteMetadataImageCache;
@protocol WBSSiteMetadataProviderDelegate;

@interface _SFLinkPresentationIconCache : NSObject <WBSSiteMetadataProvider>
{
    WBSSiteMetadataImageCache *_imageCache;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (void)purgeUnneededCacheEntries;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(_Bool)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(_Bool *)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)dealloc;
- (void)saveImage:(id)arg1 forHost:(id)arg2;
- (id)imageForHost:(id)arg1;
- (id)initWithImageDirectoryURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool providesFavicons;
@property(readonly) Class superclass;

@end

