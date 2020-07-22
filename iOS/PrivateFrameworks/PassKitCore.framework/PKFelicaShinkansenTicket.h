//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface PKFelicaShinkansenTicket : NSObject <NSSecureCoding>
{
    NSArray *_trains;
    NSNumber *_validityStartDate;
    NSNumber *_validityTerm;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSNumber *validityTerm; // @synthesize validityTerm=_validityTerm;
@property(readonly, copy, nonatomic) NSNumber *validityStartDate; // @synthesize validityStartDate=_validityStartDate;
@property(readonly, copy, nonatomic) NSArray *trains; // @synthesize trains=_trains;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

