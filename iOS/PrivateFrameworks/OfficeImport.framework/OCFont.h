//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OCFontSubfamily;

__attribute__((visibility("hidden")))
@interface OCFont : NSObject
{
    _Bool _bold;
    _Bool _italic;
    OCFontSubfamily *_subfamily;
}

+ (id)fontWithSubfamily:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool italic; // @synthesize italic=_italic;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(readonly, nonatomic) OCFontSubfamily *subfamily; // @synthesize subfamily=_subfamily;
- (id)initWithSubfamily:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;

@end

