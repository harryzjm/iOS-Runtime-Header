//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VTKSquareDrawItem : NSObject
{
    UIColor *_color;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)drawAtContext:(id)arg1;
- (id)initWitColor:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

