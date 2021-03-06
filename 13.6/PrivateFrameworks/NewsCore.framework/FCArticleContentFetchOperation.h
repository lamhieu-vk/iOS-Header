//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCArticleContentManifest, FCHeldRecords, FCInterestToken, NSArray, NSString, NTPBArticleRecord;
@protocol FCContentContext, FCFlintHelper;

@interface FCArticleContentFetchOperation : FCMultiStepFetchOperation
{
    id <FCContentContext> _context;
    id <FCFlintHelper> _flintHelper;
    NSString *_articleID;
    FCInterestToken *_webArchiveInterestToken;
    FCHeldRecords *_heldArticleRecords;
    NTPBArticleRecord *_articleRecord;
    FCArticleContentManifest *_contentManifest;
    NSArray *_flintResources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *flintResources; // @synthesize flintResources=_flintResources;
@property(retain, nonatomic) FCArticleContentManifest *contentManifest; // @synthesize contentManifest=_contentManifest;
@property(retain, nonatomic) NTPBArticleRecord *articleRecord; // @synthesize articleRecord=_articleRecord;
@property(retain, nonatomic) FCHeldRecords *heldArticleRecords; // @synthesize heldArticleRecords=_heldArticleRecords;
@property(retain, nonatomic) FCInterestToken *webArchiveInterestToken; // @synthesize webArchiveInterestToken=_webArchiveInterestToken;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(retain, nonatomic) id <FCFlintHelper> flintHelper; // @synthesize flintHelper=_flintHelper;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (id)completeFetchOperation;
- (id)fetchFlintResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchFlintDocumentWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchWebArchiveWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchWebExcerptWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchContentManifestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleID:(id)arg3;

@end

