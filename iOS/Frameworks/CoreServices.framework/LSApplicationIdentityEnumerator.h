//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSEnumerator.h"

@class LSApplicationRecord, NSEnumerator, NSError, _LSApplicationRecordEnumerator;

__attribute__((visibility("hidden")))
@interface LSApplicationIdentityEnumerator : LSEnumerator
{
    NSError *_ctxError;
    _LSApplicationRecordEnumerator *_recordEnumerator;
    LSApplicationRecord *_currentRecord;
    NSEnumerator *_currentRecordIdentitiesEnumerator;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithAppEnumerationOptions:(unsigned long long)arg1;

@end

