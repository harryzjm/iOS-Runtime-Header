//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEWriter-Protocol.h>

@class NSData;

@interface DEVersionWriter : NSObject <DEWriter>
{
    NSData *_version;
    struct CC_SHA256state_st _context;
}

+ (_Bool)prepareDirsFor:(id)arg1;
+ (id)getURLFor:(id)arg1 version:(id)arg2 base:(id)arg3;
+ (id)versionFile:(id)arg1;
+ (id)versionToString:(id)arg1;
+ (id)versionString:(id)arg1;
+ (id)versionData:(id)arg1;
+ (id)dataWithHexString:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CC_SHA256state_st context; // @synthesize context=_context;
@property(retain, nonatomic) NSData *version; // @synthesize version=_version;
- (void)close;
- (void)writeData:(id)arg1;
- (id)init;

@end
