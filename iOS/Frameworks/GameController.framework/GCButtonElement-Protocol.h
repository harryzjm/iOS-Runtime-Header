//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/GCPhysicalInputElement-Protocol.h>

@protocol GCLinearInput><GCPressedStateInput, GCTouchedStateInput;

@protocol GCButtonElement <GCPhysicalInputElement>
@property(nonatomic, readonly) id <GCTouchedStateInput> touchedInput;
@property(nonatomic, readonly) id <GCLinearInput><GCPressedStateInput> pressedInput;
@end

