//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CKSpotlightSearchResult : NSObject
{
    NSString *_chatGUID;
    NSString *_messageGUID;
    NSString *_summary;
    NSDate *_messageDate;
}

@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSDate *messageDate; // @synthesize messageDate=_messageDate;
@property(copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(copy, nonatomic) NSString *chatGUID; // @synthesize chatGUID=_chatGUID;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithMessageGUID:(id)arg1 chatGUID:(id)arg2 messageTime:(id)arg3 summery:(id)arg4;

@end

