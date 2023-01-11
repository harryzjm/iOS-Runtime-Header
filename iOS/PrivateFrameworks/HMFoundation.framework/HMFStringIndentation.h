//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMFStringIndentation
{
    unsigned long long _width;
    unsigned long long _level;
}

+ (id)indentationWithWidth:(unsigned long long)arg1;
+ (id)indentation;
@property(readonly) unsigned long long level; // @synthesize level=_level;
@property(readonly) unsigned long long width; // @synthesize width=_width;
- (id)indentationByLevels:(long long)arg1;
- (id)description;
- (id)initWithWidth:(unsigned long long)arg1;
- (id)init;

@end
