//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface TSUDateFormatCategoryEntry : NSObject
{
    unsigned short _separator;
    NSMutableArray *_formatters;
    NSMutableSet *_formatStrings;
}

- (void).cxx_destruct;
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(id *)arg3 perfect:(_Bool *)arg4;
- (void)addFormat:(id)arg1 locale:(id)arg2;
- (id)formatStrings;
- (unsigned short)separator;
- (id)initWithSeparator:(unsigned short)arg1;

@end

