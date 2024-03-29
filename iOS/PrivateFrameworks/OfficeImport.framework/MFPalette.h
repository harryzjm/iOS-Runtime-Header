//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFPalette : NSObject
{
    NSMutableArray *m_colours;
}

+ (id)paletteWithColours:(id)arg1;
- (void).cxx_destruct;
- (id)getColour:(int)arg1;
- (_Bool)resize:(int)arg1;
- (_Bool)setEntries:(int)arg1 in_colours:(id)arg2;
- (int)selectInto:(id)arg1;
- (id)initWithColours:(id)arg1;
- (id)init;

@end

