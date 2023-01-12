//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString;

@interface IMMessageDescriptor : NSObject
{
    NSArray *_messageParts;
    NSString *_messageGUID;
    NSAttributedString *_messageBody;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSAttributedString *messageBody; // @synthesize messageBody=_messageBody;
@property(readonly, copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(readonly, nonatomic) NSArray *messageParts; // @synthesize messageParts=_messageParts;
- (id)initWithMessageBody:(id)arg1 messageGUID:(id)arg2;

@end
