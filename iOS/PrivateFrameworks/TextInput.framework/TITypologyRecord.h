//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSCoding-Protocol.h>

@interface TITypologyRecord : NSObject <NSCoding>
{
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)textSummaryForAutocorrection:(id)arg1;
- (id)shortDescription;
- (id)textSummary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)applyToStatistic:(id)arg1;

@end

