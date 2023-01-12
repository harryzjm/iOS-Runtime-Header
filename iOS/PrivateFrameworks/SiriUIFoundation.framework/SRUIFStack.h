//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUIFoundation/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface SRUIFStack : NSObject <NSCopying>
{
    NSMutableArray *_elements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_elements) NSMutableArray *elements; // @synthesize elements=_elements;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) id topObject;
- (id)init;
- (id)initWithStack:(id)arg1;
- (id)initWithArray:(id)arg1;

@end
