//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCPrivateDataController;

@interface FCPrivateZoneFeedDescriptor
{
    FCPrivateDataController *_privateDataController;
}

@property(retain, nonatomic) FCPrivateDataController *privateDataController; // @synthesize privateDataController=_privateDataController;
- (void).cxx_destruct;
- (id)backingHeadlineIDs;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (id)initWithPrivateDataController:(id)arg1 identifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

