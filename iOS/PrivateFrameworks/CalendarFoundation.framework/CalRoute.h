//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CalendarFoundation/NSSecureCoding-Protocol.h>

@class CalLocation, NSString;

@interface CalRoute : NSObject <NSSecureCoding>
{
    CalLocation *_start;
    CalLocation *_end;
    double _duration;
    NSString *_route;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *route; // @synthesize route=_route;
@property double duration; // @synthesize duration=_duration;
@property(retain) CalLocation *end; // @synthesize end=_end;
@property(retain) CalLocation *start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
