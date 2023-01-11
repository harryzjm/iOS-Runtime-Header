//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSUCustomFormat;

__attribute__((visibility("hidden")))
@interface TSKCustomFormatListStemMatchObject : NSObject <NSCopying>
{
    TSUCustomFormat *_customFormat;
}

+ (id)stemMatchObjectWithCustomFormat:(id)arg1;
@property(readonly, nonatomic) TSUCustomFormat *customFormat; // @synthesize customFormat=_customFormat;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initObjectWithCustomFormat:(id)arg1;

@end

