//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface CAStateControllerAnimation : NSObject
{
    CALayer *_layer;
    NSString *_key;
}

@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void)dealloc;
- (id)initWithLayer:(id)arg1 key:(id)arg2;

@end
