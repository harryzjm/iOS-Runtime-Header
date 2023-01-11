//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIColor;

@interface _UIShareParticipantDetails : NSObject <NSSecureCoding>
{
    NSString *_participantID;
    NSString *_detailText;
    UIColor *_participantColor;
}

+ (_Bool)supportsSecureCoding;
@property(copy) UIColor *participantColor; // @synthesize participantColor=_participantColor;
@property(copy) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy) NSString *participantID; // @synthesize participantID=_participantID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
