//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IFColor, NSString;

__attribute__((visibility("hidden")))
@interface ISBorderEffect : NSObject
{
    IFColor *_color;
    double _lineWidth;
}

- (void).cxx_destruct;
@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) IFColor *color; // @synthesize color=_color;
- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;
- (id)initWithLineWidth:(double)arg1 color:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

