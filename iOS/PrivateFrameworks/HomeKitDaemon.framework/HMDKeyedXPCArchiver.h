//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver;

@interface HMDKeyedXPCArchiver : HMFObject
{
    NSKeyedArchiver *_archiver;
}

@property(retain, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
- (void).cxx_destruct;
- (id)encodedData;
- (void)finishEncoding;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_configure;
- (void)dealloc;
- (id)initForWritingWithMessage:(id)arg1;

@end

