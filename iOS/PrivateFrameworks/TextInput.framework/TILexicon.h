//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSArray;

@interface TILexicon : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_entries;
}

+ (void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)lexiconWithEntries:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

