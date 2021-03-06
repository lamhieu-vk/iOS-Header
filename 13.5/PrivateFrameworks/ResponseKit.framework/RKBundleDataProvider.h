//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ResponseKit/RKDisplayStringsProvider-Protocol.h>
#import <ResponseKit/RKPolarityDataProvider-Protocol.h>

@class NSBundle, NSMutableDictionary, NSURL, RKAssets;

@interface RKBundleDataProvider : NSObject <RKDisplayStringsProvider, RKPolarityDataProvider>
{
    NSBundle *_bundle;
    RKAssets *_assets;
    NSURL *_assetPlistURL;
    NSMutableDictionary *_displayStringsByPlatformByLanguage;
    NSMutableDictionary *_polarityMapsByLanguageID;
    NSMutableDictionary *_localizationsByLanguageID;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *localizationsByLanguageID; // @synthesize localizationsByLanguageID=_localizationsByLanguageID;
@property(readonly) NSMutableDictionary *polarityMapsByLanguageID; // @synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID;
@property(readonly) NSMutableDictionary *displayStringsByPlatformByLanguage; // @synthesize displayStringsByPlatformByLanguage=_displayStringsByPlatformByLanguage;
@property(readonly) NSURL *assetPlistURL; // @synthesize assetPlistURL=_assetPlistURL;
@property(readonly) RKAssets *assets; // @synthesize assets=_assets;
@property(readonly) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)displayStringsForPlatform:(id)arg1 languageID:(id)arg2;
- (id)stringsFromTable:(id)arg1 forLanguageIdentifier:(id)arg2;
- (id)initWithAssetPlist:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)init;

@end

