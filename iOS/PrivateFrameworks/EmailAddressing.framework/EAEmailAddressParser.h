//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EAEmailAddressParser : NSObject
{
}

+ (void)insertPreviousRoute:(unsigned short *)arg1 ofLength:(unsigned long long)arg2 toBuffer:(unsigned short **)arg3 ofLength:(unsigned long long)arg4 atPosition:(unsigned short *)arg5 addSpace:(_Bool)arg6;
+ (id)displayNameFromAddress:(id)arg1;
+ (void)_componentsForFullAddress:(id)arg1 rawAddressRange:(struct _NSRange *)arg2 localPartRange:(struct _NSRange *)arg3 domainRange:(struct _NSRange *)arg4;
+ (id)addressDomainFromAddress:(id)arg1;
+ (id)localPartFromAddress:(id)arg1;
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)arg1;
+ (id)rawAddressFromFullAddress:(id)arg1;
+ (_Bool)addressIsEmptyGroup:(id)arg1;
+ (_Bool)isLegalEmailAddress:(id)arg1;
+ (id)unsafeAddressLocalPartCharacterSet;

@end

