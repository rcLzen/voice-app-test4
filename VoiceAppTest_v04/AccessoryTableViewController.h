//
//  AccessoryTableViewController.h
//  VoiceAppTest_v04
//
//  Created by Richard Lorenzen on 3/25/15.
//  Copyright (c) 2015 Richard Lorenzen. All rights reserved.
//

@import UIKit;
@import HomeKit;
@import ExternalAccessory;


@interface AccessoryTableViewController : UITableViewController <HMAccessoryBrowserDelegate, EAWiFiUnconfiguredAccessoryBrowserDelegate, HMHomeDelegate>

@end
