//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCalendar/ICSAppendable-Protocol.h>

@class NSMutableString, NSString;

@interface ICSStringWriter : NSObject <ICSAppendable>
{
    NSMutableString *_result;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)mutableResult;
- (id)result;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

