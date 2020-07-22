//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEConfiguration : NSObject
{
    unsigned int mWarnWhenFormulasReferToEmptyCells:1;
}

+ (id)sharedCalculationEngineConfiguration;
- (void)setWarnWhenFormulasReferToEmptyCells:(_Bool)arg1;
- (_Bool)warnWhenFormulasReferToEmptyCells;
- (id)init;

@end

