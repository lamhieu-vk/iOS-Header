//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PSITable.h>

@class PSIStatement;

@interface PSIWordEmbeddingTable : PSITable
{
    PSIStatement *_insertStatement;
    PSIStatement *_insertPrefixStatement;
    PSIStatement *_deleteStatement;
    PSIStatement *_deletePrefixStatement;
    PSIStatement *_checkStatement;
    PSIStatement *_selectMatchesStatement;
    PSIStatement *_selectStatement;
    struct __CFLocale *_locale;
    _Bool _localeIsGerman;
}

- (void).cxx_destruct;
- (id)wordEmbeddingVersion;
- (void)removeWord:(id)arg1;
- (void)insertWord:(id)arg1 synonyms:(id)arg2;
- (_Bool)isInsertedWithWord:(id)arg1;
- (id)wordEmbeddingsForToken:(id)arg1;
- (id)matchesForToken:(id)arg1;
- (id)dumpWordEmbeddingTable;
- (void)cacheSearchableStatements;
- (void)cacheWritableStatements;
- (void)clear;
- (void)finalizze;
- (id)initWithDelegate:(id)arg1 searchable:(_Bool)arg2 writable:(_Bool)arg3 locale:(id)arg4;

@end

