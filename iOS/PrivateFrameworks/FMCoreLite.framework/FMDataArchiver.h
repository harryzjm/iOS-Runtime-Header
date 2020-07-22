//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface FMDataArchiver : NSObject
{
    _Bool _backedUp;
    _Bool _createDirectories;
    long long _dataProtectionClass;
    NSURL *_fileURL;
}

@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) _Bool createDirectories; // @synthesize createDirectories=_createDirectories;
@property(nonatomic) _Bool backedUp; // @synthesize backedUp=_backedUp;
@property(nonatomic) long long dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
- (void).cxx_destruct;
- (unsigned long long)dataWritingOptionForDataProtectionClass:(long long)arg1;
- (id)saveObject:(id)arg1;
- (_Bool)saveDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)saveArray:(id)arg1 error:(id *)arg2;
- (id)saveDictionary:(id)arg1;
- (id)saveArray:(id)arg1;
- (id)readData:(id *)arg1 class:(Class)arg2;
- (id)readDictionary:(id *)arg1;
- (id)readArray:(id *)arg1;
- (id)initWithFileURL:(id)arg1;

@end
