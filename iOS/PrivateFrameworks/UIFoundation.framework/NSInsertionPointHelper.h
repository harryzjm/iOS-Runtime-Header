//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface NSInsertionPointHelper : NSObject
{
    struct _NSRange _charRange;
    long long _writingDirection;
    unsigned long long _count;
    unsigned long long _altCount;
    double *_logicalPositions;
    double *_logicalLeftBoundaries;
    double *_logicalRightBoundaries;
    unsigned long long *_logicalCharIndexes;
    double *_displayPositions;
    unsigned long long *_displayCharIndexes;
    double *_logicalAltPositions;
    unsigned long long *_logicalAltCharIndexes;
    double *_displayAltPositions;
    unsigned long long *_displayAltCharIndexes;
}

- (void)dealloc;

@end
