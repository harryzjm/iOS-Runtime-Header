//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, _KSFileEntry;

@interface _KSUserWordsInfo : NSObject
{
    NSDate *_modifiedDate;
    unsigned long long _size;
    _KSFileEntry *_file;
}

+ (id)infoWithRecord:(id)arg1;
+ (id)infoWithFiles:(id)arg1;
+ (id)filesForLanguage:(id)arg1;
+ (id)keyboardDirectory;
+ (id)keyForData;
+ (id)keyNamesExcludingData;
- (void).cxx_destruct;
- (id)description;
- (void)saveToRecord:(id)arg1;
- (_Bool)isBetterThan:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)initWithFiles:(id)arg1;

@end

