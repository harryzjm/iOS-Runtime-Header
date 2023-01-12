//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLOffsetJSExports-Protocol.h>

@interface TMLOffset : NSObject <TMLOffsetJSExports, NSCopying>
{
    struct UIOffset _offset;
}

+ (void)initializeJSContext:(id)arg1;
@property(readonly, nonatomic) struct UIOffset offset; // @synthesize offset=_offset;
- (id)description;
@property(readonly, nonatomic) double vertical;
@property(readonly, nonatomic) double horizontal;
- (id)UIOffsetValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOffset:(struct UIOffset)arg1;

@end
