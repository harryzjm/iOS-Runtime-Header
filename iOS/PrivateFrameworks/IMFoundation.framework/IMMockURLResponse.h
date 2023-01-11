//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSHTTPURLResponse, NSString;

@interface IMMockURLResponse : NSObject <NSSecureCoding>
{
    NSHTTPURLResponse *_response;
    NSData *_data;
    NSString *_requestBodyKeyPath;
    NSString *_mockID;
}

+ (id)objectFromPlist:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy) NSString *mockID; // @synthesize mockID=_mockID;
@property(copy) NSString *requestBodyKeyPath; // @synthesize requestBodyKeyPath=_requestBodyKeyPath;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSHTTPURLResponse *response; // @synthesize response=_response;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

