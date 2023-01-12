//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GCKeyboardEventData : NSObject
{
    _Bool _pressed;
    unsigned short _keyCode;
    unsigned long long _senderID;
}

+ (_Bool)supportsSecureCoding;
@property unsigned long long senderID; // @synthesize senderID=_senderID;
@property _Bool pressed; // @synthesize pressed=_pressed;
@property unsigned short keyCode; // @synthesize keyCode=_keyCode;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

