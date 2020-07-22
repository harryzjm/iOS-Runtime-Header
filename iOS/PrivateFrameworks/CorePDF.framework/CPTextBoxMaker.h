//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CPBody, CPZone;

@interface CPTextBoxMaker : NSObject
{
    CPBody *bodyZone;
    CPZone *mainZone;
}

+ (void)boxLayoutsIn:(id)arg1;
+ (void)promoteLayoutsIn:(id)arg1;
- (void)boxLayoutsIn:(id)arg1;
- (void)boxLayout:(id)arg1;
- (void)promoteLayoutsIn:(id)arg1;
- (void)promoteLayoutsInCertainRegions:(id)arg1;
- (_Bool)layoutIsSliced:(id)arg1;
- (void)rotate:(id)arg1;
- (void)rotateTextBox:(id)arg1;
- (void)makeBoxesWith:(id)arg1 parent:(id)arg2;

@end

