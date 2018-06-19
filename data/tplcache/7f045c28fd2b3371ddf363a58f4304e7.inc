<div id="jbbn3{dede:global name=itemindex runphp='yes'}@me=@me;{/dede:global}" style="display:{dede:global.itemindex  runphp='yes'}if(@me==1){@me='block';}else{@me='none';}{/dede:global.itemindex};">
              <div class="tuijians mt10">
                <div class="tuijiansl fl">
                  <dl>
                  {dede:arclist  limit='0,1'  type='image.'   titlelen='150' infolen='150'  titlelen='26' infolen='80'}
                    <dt><a href="[field:arcurl/]">[field:image/]</a></dt>
                    <dd> <span><a href="[field:arcurl/]">[field:title/]</a></span>
                      <p>[field:info/]...<a href="[field:arcurl/]">[查看全文]</a></p>
                    </dd>
                  {/dede:arclist}
                  </dl>
                  <div class="clear"></div>
                  <ul>
                  {dede:arclist  limit='0,3' titlelen='50' }
                    <li>·<a href="[field:arcurl/]">[field:title/]</a></li>
                  {/dede:arclist}
                  </ul>
                </div>
                <div class="tuijiansl fr">
                  <dl>
                  {dede:arclist  limit='1,1'  type='image.'   titlelen='150' infolen='150'  titlelen='26' infolen='80'}
                    <dt><a href="[field:arcurl/]">[field:image/]</a></dt>
                    <dd> <span><a href="[field:arcurl/]">[field:title/]</a></span>
                      <p>[field:info/]...<a href="[field:arcurl/]">[查看全文]</a></p>
                    </dd>
                  {/dede:arclist}
                  </dl>
                  <div class="clear"></div>
                  <ul>
                  {dede:arclist  limit='3,3' titlelen='50' }
                    <li>·<a href="[field:arcurl/]">[field:title/]</a></li>
                  {/dede:arclist}
                  </ul>
                </div>
              </div>
            </div>