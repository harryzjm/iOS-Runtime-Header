//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CDMFoundation/NSCopying-Protocol.h>

@class NSArray;

@interface NLv4EmbeddingTensor : NSObject <NSCopying>
{
    NSArray *_values;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
