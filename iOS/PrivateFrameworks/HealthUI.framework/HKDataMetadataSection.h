//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataMetadataSectionProtocol-Protocol.h>

@interface HKDataMetadataSection : NSObject <HKDataMetadataSectionProtocol>
{
}

- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;

@end

