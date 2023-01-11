//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCopying-Protocol.h>

@class PKInk;

@interface PKTool : NSObject <NSCopying>
{
    PKInk *_ink;
}

+ (id)_toolWithInk:(id)arg1;
+ (_Bool)_inkIsInkingTool:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKInk *ink; // @synthesize ink=_ink;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithInk:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3;
- (id)initWithType:(id)arg1 color:(id)arg2 weight:(double)arg3;

@end
