//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface ENSQLiteConnection : NSObject
{
    struct sqlite3 *_db;
    struct __CFDictionary *_statementCache;
    _Bool _isInTransaction;
    int _additionalOpenFlags;
    NSURL *_fileURL;
}

- (void).cxx_destruct;
@property(nonatomic) int additionalOpenFlags; // @synthesize additionalOpenFlags=_additionalOpenFlags;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)_lastErrorWithResultCode:(int)arg1;
- (_Bool)truncateWithError:(id *)arg1;
- (_Bool)getUserVersion:(long long *)arg1 error:(id *)arg2;
- (_Bool)setUserVersion:(long long)arg1 error:(id *)arg2;
- (_Bool)getIntegerValue:(long long *)arg1 forPragma:(id)arg2 error:(id *)arg3;
- (_Bool)setIntegerValue:(long long)arg1 forPragma:(id)arg2 error:(id *)arg3;
- (_Bool)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(_Bool *)arg2 error:(id *)arg3;
- (_Bool)_prepareStatementForSQL:(id)arg1 cache:(_Bool)arg2 error:(id *)arg3 statementHandler:(CDUnknownBlockType)arg4;
- (_Bool)_executeSQL:(id)arg1 cacheStatement:(_Bool)arg2 error:(id *)arg3 bindingHandler:(CDUnknownBlockType)arg4 enumerationHandler:(CDUnknownBlockType)arg5;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2 bindingHandler:(CDUnknownBlockType)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
- (_Bool)executeUncachedSQLStatements:(id)arg1 error:(id *)arg2;
- (_Bool)executeUncachedSQL:(id)arg1 error:(id *)arg2;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2;
- (_Bool)performTransactionWithType:(long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long lastInsertedRowID;
- (void)close;
- (int)openWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool isOpen;
- (void)dealloc;
- (id)_initWithDatabaseURL:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (id)init;

@end

